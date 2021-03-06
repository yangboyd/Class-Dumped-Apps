//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGFilter.h>

@class IGImageFilter, NSArray;

@interface IGDynamicOverlayFilter : IGFilter
{
    IGImageFilter *_blitFilter;
    IGImageFilter *_overlayFilter;
    NSArray *_dynamicOverlays;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *dynamicOverlays; // @synthesize dynamicOverlays=_dynamicOverlays;
@property(readonly, nonatomic) IGImageFilter *overlayFilter; // @synthesize overlayFilter=_overlayFilter;
@property(readonly, nonatomic) IGImageFilter *blitFilter; // @synthesize blitFilter=_blitFilter;
- (void)render:(id)arg1 to:(id)arg2;
- (id)initWithDynamicOverlayModels:(id)arg1;

@end

