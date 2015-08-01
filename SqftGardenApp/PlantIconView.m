//
//  PlantIcon.m
//  SqftGardenApp
//
//  Created by Matthew Helm on 5/13/15.
//  Copyright (c) 2015 Matthew Helm. All rights reserved.
//

#import "PlantIconView.h"
#import "DBManager.h"

@implementation PlantIconView
const int ICON_DEFAULT_BORDER = 3;
const int ICON_DEFAULT_CORNER = 15;
//int plantId;

- (id)initWithFrame:(CGRect)frame : (int)plantIndex{
    _plantId = plantIndex;
    self = [super initWithFrame:frame];
    if (self) {
        [self commonInit];
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self commonInit];
    }
    return self;
}

- (void)awakeFromNib {
    [self commonInit];
}

- (void)commonInit {
    self.backgroundColor = [UIColor whiteColor];
    DBManager *dbManager = [DBManager getSharedDBManager];
    
    NSDictionary *json = [dbManager getPlantDataById:_plantId];
    _iconResource = [json objectForKey:@"icon"];
    _plantName = [json objectForKey:@"name"];
    NSString *str = [json objectForKey:@"maturity"];
    _maturity = str.intValue;
    [self setDefaultParameters];
}

- (void) setDefaultParameters{
    self.color = [UIColor lightGrayColor];
    self.fillColor = [self.color colorWithAlphaComponent:0.25];
    self.layer.borderColor = [UIColor lightGrayColor].CGColor;
    self.layer.borderWidth = ICON_DEFAULT_BORDER;
    self.layer.cornerRadius = ICON_DEFAULT_CORNER;
}


@end
