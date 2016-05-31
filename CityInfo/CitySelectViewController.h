//
//  CitySelectViewController.h
//  CityInfo
//
//  Created by zhangchao on 16/5/31.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

/*
 class  选择城市的页面
 */

#import <UIKit/UIKit.h>
#import "CityInfo.h"

@protocol CitySelectViewControllerDelegate <NSObject>
- (void)touchResponse:(CityInfo *)cityInfo;
@end

@protocol CitySelectViewControllerDataSource <NSObject>
@required
//热门城市
- (NSArray *)loadHotCity;
@optional
//定位当前城市
- (NSString *)loadLocationCity;
@end

@interface CitySelectViewController : UIViewController
@property (nonatomic, assign) id<CitySelectViewControllerDelegate> delegate;
@property (nonatomic, assign) id<CitySelectViewControllerDataSource> dataSource;
@end
