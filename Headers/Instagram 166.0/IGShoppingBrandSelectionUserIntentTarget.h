//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGShoppingProductSourceSelectionConfiguration, NSString;
@protocol IGShoppingBrandSelectionViewControllerDelegate;

@interface IGShoppingBrandSelectionUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _isVCInPageTab;
    NSString *_taggingSessionId;
    unsigned long long _taggingSurfaceType;
    unsigned long long _brandSelectionContext;
    NSString *_priorModule;
    id <IGShoppingBrandSelectionViewControllerDelegate> _delegate;
    IGShoppingProductSourceSelectionConfiguration *_productSourceSelectionConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShoppingProductSourceSelectionConfiguration *productSourceSelectionConfig; // @synthesize productSourceSelectionConfig=_productSourceSelectionConfig;
@property(readonly, nonatomic) id <IGShoppingBrandSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) unsigned long long brandSelectionContext; // @synthesize brandSelectionContext=_brandSelectionContext;
@property(readonly, nonatomic) unsigned long long taggingSurfaceType; // @synthesize taggingSurfaceType=_taggingSurfaceType;
@property(readonly, nonatomic) NSString *taggingSessionId; // @synthesize taggingSessionId=_taggingSessionId;
@property(readonly, nonatomic) _Bool isVCInPageTab; // @synthesize isVCInPageTab=_isVCInPageTab;
- (id)initWithIsVCInPageTab:(_Bool)arg1 taggingSessionId:(id)arg2 taggingSurfaceType:(unsigned long long)arg3 brandSelectionContext:(unsigned long long)arg4 priorModule:(id)arg5 delegate:(id)arg6 productSourceSelectionConfig:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

