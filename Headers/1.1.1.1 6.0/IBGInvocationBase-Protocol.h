//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/NSObject-Protocol.h>

@protocol IBGInvocationBaseDelegate;

@protocol IBGInvocationBase <NSObject>
@property _Bool isInstalled;
@property(nonatomic) __weak id <IBGInvocationBaseDelegate> delegate;
- (void)invoke;
- (void)uninstall;
- (void)refresh;
- (void)install;
- (id)initWithDelegate:(id <IBGInvocationBaseDelegate>)arg1;
@end

