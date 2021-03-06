//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/NSObject-Protocol.h>

@class NSObject;
@protocol SCSMinimizableDelegate;

@protocol SCSMinimizable <NSObject>
@property(nonatomic) __weak NSObject<SCSMinimizableDelegate> *minimizationDelegate;
@property(nonatomic, getter=isMinimized) _Bool minimized;
@property(readonly, nonatomic, getter=isMinimizable) _Bool minimizable;
- (void)setMinimized:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

