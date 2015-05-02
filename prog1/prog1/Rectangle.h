//
//  Rectangle.h
//  prog1
//
//  Created by OA Wu on 2015/5/2.
//  Copyright (c) 2015年 OA Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class XYPoint;
@interface Rectangle : NSObject


@property int width, height;

-(XYPoint *) origin;
-(void) setOrigin: (XYPoint *) pt;

-(void) setWidth: (int)w andHeight: (int)h;
-(int) area;
-(int) perimeter;


@end