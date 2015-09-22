//
//  MainViewController.h
//  SqftGardenApp
//  Created by Matthew Helm on 5/1/15.
//  Copyright (c) 2015 Matthew Helm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SqftGardenModel.h"
#import "SelectPlantView.h"
#import "DateSelectView.h"


@interface EditBedViewController : UIViewController
@property(nonatomic) SqftGardenModel *currentGardenModel;
@property(nonatomic) DateSelectView *datePickerView;
@property(nonatomic) SelectPlantView *selectPlantView;

@property(nonatomic) int topOffset;
@property(nonatomic) int sideOffset;
@property(nonatomic) float heightMultiplier;
@property(nonatomic) int bedRowCount;
@property(nonatomic) int bedColumnCount;
@property(nonatomic) int bedCellCount;
@property(nonatomic) NSMutableArray *bedViewArray;
@property(nonatomic) NSMutableArray *selectPlantArray;

@property(nonatomic) UIView *bedFrameView;
@property(nonatomic) UIView *selectMessageView;
@property(nonatomic) UILabel *selectMessageLabel;
@property(nonatomic) UIView *titleView;
@property(nonatomic) UIView *dateIconView;
@property(nonatomic) UIView *saveIconView;
@property(nonatomic) UIView *dataPresentIconView;

- (void) updatePlantBeds : (int)updatedCell : (int)plantId;
- (void) updatePlantingDate : (NSDate *)date;
- (void) initViews;



@property(nonatomic) bool datePickerIsOpen;

@end




