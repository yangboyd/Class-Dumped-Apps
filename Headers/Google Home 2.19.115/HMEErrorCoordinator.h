//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEErrorHandler-Protocol.h"

@class NSString;
@protocol HMEErrorCenter, HMEErrorCoordinatorDelegate;

@interface HMEErrorCoordinator : NSObject <HMEErrorHandler>
{
    id <HMEErrorCoordinatorDelegate> _delegate;
    id <HMEErrorCenter> _errorCenter;
}

@property(readonly, nonatomic) id <HMEErrorCenter> errorCenter; // @synthesize errorCenter=_errorCenter;
@property(nonatomic) __weak id <HMEErrorCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleError:(id)arg1;
- (void)dealloc;
- (id)initWithErrorCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

