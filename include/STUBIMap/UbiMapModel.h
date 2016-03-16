//
//  UbiMapModel.h
//  STUBIMap
//
//  Created by 刘涛 on 16/3/4.
//  Copyright © 2016年 ShiTu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//区域实例对象基类，提供区域对象公有属性

@interface UbiMapModel : NSObject

@property(assign,nonatomic)uint64_t idd;

@property(assign,nonatomic)float x;

@property(assign,nonatomic)float y;

@property(strong,nonatomic)UIImage *iconImage;

@property(assign,nonatomic)uint64_t floor;

@end
