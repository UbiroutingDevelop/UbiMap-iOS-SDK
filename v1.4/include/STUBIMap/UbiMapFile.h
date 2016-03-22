//
//  UbiMapFile.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/7.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^dataClearUpBlock)(void);

@interface UbiMapFile : NSObject
//所有商厦数据
@property(strong,nonatomic)NSMutableDictionary *allData;
//整理数据完毕时调用
@property(copy,nonatomic)dataClearUpBlock dataLoading;

- (instancetype)initWithMapId:(NSInteger)mapId;

@end
