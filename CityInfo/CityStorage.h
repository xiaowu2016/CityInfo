//
//  CityStorage.h
//  CityInfo
//
//  Created by zhangchao on 16/5/31.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FMDB/FMDB.h>
#import "CityInfo.h"

@interface CityStorage : NSObject
{
    FMDatabaseQueue *dbQueue;
}

/*!
 *	@brief	单例方法
 */
+ (instancetype)shareInstance;

/*!
 *	@brief	读取全国的城市信息
 *
 *	@return	由CityInfo组成的数组
 */
- (NSArray *)getAllCityInfo;

- (CityInfo *)getCityInfo:(NSString *)cityName;
@end
