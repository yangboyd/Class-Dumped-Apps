//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACallSingleVideoViewLayout-Protocol.h"

@interface WACallSingleViewLayoutOneToOne : NSObject <WACallSingleVideoViewLayout>
{
    _Bool _fullscreen;
}

@property(readonly, nonatomic) long long gridTotal;
@property(readonly, nonatomic) long long gridColumn;
@property(readonly, nonatomic) long long gridRow;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(readonly, nonatomic, getter=isGrid) _Bool grid;
- (id)initWithFullscreen:(_Bool)arg1;

@end

