//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class SPTHomeViewModelHiddenComponents;
@protocol HUBContentOperationDelegate;

@interface SPTHomeRemoveComponentContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    SPTHomeViewModelHiddenComponents *_hiddenComponents;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeViewModelHiddenComponents *hiddenComponents; // @synthesize hiddenComponents=_hiddenComponents;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithHiddenComponents:(id)arg1;

@end

