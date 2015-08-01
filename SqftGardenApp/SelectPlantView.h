//
//  PlantSelectView.h
//  SqftGardenApp
//
//  Created by Matthew Helm on 5/12/15.
//  Copyright (c) 2015 Matthew Helm. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "EditBedViewController.h"

@interface SelectPlantView : UIScrollView
@property (nonatomic, strong) UIColor* color;
@property (nonatomic, strong) UIColor* fillColor;
@property (nonatomic) UIView* mainView;
@property (nonatomic) EditBedViewController* editBedVC;

@end