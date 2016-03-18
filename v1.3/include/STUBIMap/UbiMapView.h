//
//  openGLview.h
//  OpenGL-ES
//
//  Created by 刘涛 on 15/11/12.
//  Copyright © 2015年 ShiTu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UbiMapModel.h"

@protocol mapViewDataDelegate <NSObject>
@required
/**
 *  点击页面区域返回点击数据
 *
 *  @param data data为被点击区域信息
 */
- (void)getclickAreaData:(UbiMapModel *)data;

@end

@interface UbiMapView : UIView
//当前建筑所有楼层信息，用于初始化定位SDK,内部为UbiMapFloor的object.
@property(strong,nonatomic)NSMutableArray *floorModels;

@property(weak,nonatomic)id<mapViewDataDelegate>dataDelegate;

//位图模式
- (instancetype)initWithFrame:(CGRect)frame WithFloorId:(NSInteger)floorId Map:(UIImage *)imageMap;
/**
 *  矢量图初始化
 *
 *  @param frame frame
 *  @param mapId mapID
 *
 *  @return object
 */
- (instancetype)initWithFrame:(CGRect)frame WithMapId:(NSInteger)mapId;
/**
 *  更新坐标点
 *
 *  @param point locationPoint
 */
- (void)refreshPosition:(CGPoint)point;
/**
 *  更新角度
 *
 *  @param angle angle
 */
- (void)refreshAngle:(float)angle;
/**
 *  切换目标楼层
 *
 *  @param floor target floor
 */
- (void)switchToFloor:(NSInteger)floor;
//- (void)switchToFloor:(NSInteger)floor andImageMap:(UIImage *)image;
/**
 *  跟随模式，默认关闭
 */
- (void)followMode;
/**
 *  stop MapView draw
 */
- (void)stopDraw;
/**
 *  设置当前点为导航起点
 */
- (void)setCurrentPositionAsStart;
/**
 *  设置导航起点
 *
 *  @param point 起点数据模型对象
 */
- (void)setAsStart:(UbiMapModel *)point;
/**
 *  设置导航终点
 *
 *  @param point 终点数据模型对象
 */
- (void)setAsEnd:(UbiMapModel *)point;
/**
 *  绘制导航路线
 *
 *  @param start 起点数据模型对象 （若设置当前点为起点，start穿nil）
 *  @param end   终点数据模型对象
 */
- (void)navigateWithStart:(UbiMapModel *)start andEnd:(UbiMapModel *)end;

@end
