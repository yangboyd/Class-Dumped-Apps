//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSData, NSString;

@interface YTARCameraEffectBuilder : NSObject
{
    int _maxFramesInFlight;
    NSString *_modelPath;
    _Bool _hasEffectNameStream;
    NSData *_graphData;
    _Bool _isSideLoadingEffectSettings;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)initWithGraphData:(id)arg1 modelPath:(id)arg2 maxFramesInFlight:(int)arg3 hasEffectNameStream:(_Bool)arg4 isSideLoadingEffectSettings:(_Bool)arg5;
- (id)graphInputConfigProtosFromDictionary:(id)arg1 withAssetBase:(id)arg2;
- (void)buildEffectWithInputs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

