//
//  CitySelectCell.h
//  CityInfo
//
//  Created by zhangchao on 16/5/31.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CityInfo.h"

@interface CitySelectCell : UITableViewCell
{
    UILabel * cityName;
    UIImageView * imageView;
}
- (void)setData:(CityInfo *)cityInfo isFirstCell:(BOOL)isFirstCell;
@end
