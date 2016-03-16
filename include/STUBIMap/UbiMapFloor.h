//
//  UbiMapFloor.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/16.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UbiMapFloor : NSObject

@property(assign,nonatomic)uint64_t idd;

@property(assign,nonatomic)int16_t area;

@property(assign,nonatomic)uint32_t width;

@property(assign,nonatomic)uint32_t height;

@property(assign,nonatomic)int32_t angle;

@property(assign,nonatomic)float scale;

@end
