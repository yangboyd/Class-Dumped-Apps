//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezEngineRoomView, NSArray;

@interface A9VSFezEngineRoom : NSObject
{
    NSArray *_planes;
    A9VSFezEngineRoomView *_view;
}

@property(retain, nonatomic) A9VSFezEngineRoomView *view; // @synthesize view=_view;
@property(readonly, nonatomic) NSArray *planes; // @synthesize planes=_planes;
- (void).cxx_destruct;
- (id)initWithPlanes:(id)arg1;
- (id)initWithPlanePolygons:(vector_d5dd1dd3)arg1;

@end

