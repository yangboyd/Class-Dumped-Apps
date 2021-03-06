//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOIGenericInfoViewDelegate-Protocol.h"
#import "GOIModalController-Protocol.h"

@class GOIExperimentFlags, NSArray, NSDictionary, NSString;
@protocol GOIGenericInfoDelegate;

@interface GOIGenericInfoModalController : NSObject <GOIGenericInfoViewDelegate, GOIModalController>
{
    NSArray *_actions;
    id <GOIGenericInfoDelegate> _delegate;
    NSDictionary *_UIResources;
    GOIExperimentFlags *_experimentFlags;
}

- (void).cxx_destruct;
- (void)dialogDidDismissWithCancel;
- (void)dialogDidDismissWithAction:(id)arg1;
- (void)present;
- (id)initWithActions:(id)arg1 UIResources:(id)arg2 experimentFlags:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

