//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCCFilterDescriptor-Protocol.h>

@class NSDictionary, NSString;
@protocol FBCaptureCoordinatorFilterController, FBMPFilter;

@interface FBCaptureCoordinatorFilter : NSObject <FBCCFilterDescriptor>
{
    NSDictionary *_resources;
    _Bool _needsDepthData;
    NSString *_name;
    id <FBCaptureCoordinatorFilterController> _filterController;
    long long _framerateCap;
    unsigned long long _requestedCameraCapabilities;
    id <FBMPFilter> _filter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBMPFilter> filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) unsigned long long requestedCameraCapabilities; // @synthesize requestedCameraCapabilities=_requestedCameraCapabilities;
@property(readonly, nonatomic) _Bool needsDepthData; // @synthesize needsDepthData=_needsDepthData;
@property(readonly, nonatomic) long long framerateCap; // @synthesize framerateCap=_framerateCap;
@property(readonly, nonatomic) id <FBCaptureCoordinatorFilterController> filterController; // @synthesize filterController=_filterController;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)releaseResources;
- (id)initWithName:(id)arg1 filter:(id)arg2 controller:(id)arg3 framerateCap:(long long)arg4 resources:(id)arg5 needsDepthData:(_Bool)arg6 requestedCameraCapabilities:(unsigned long long)arg7;
- (id)initWithName:(id)arg1 filter:(id)arg2 controller:(id)arg3 framerateCap:(long long)arg4 resources:(id)arg5;
@property(readonly, nonatomic) NSString *filterName;
- (id)asFilterParameters;
- (id)asCCFilter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

