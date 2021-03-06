//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SDAVAssetExportSession;

@interface PHVideoExporter : NSObject
{
    CDUnknownBlockType _progressBlock;
    SDAVAssetExportSession *_encoder;
}

@property(retain, nonatomic) SDAVAssetExportSession *encoder; // @synthesize encoder=_encoder;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (CDUnknownBlockType)exportVideoWithAsset:(id)arg1 andDir:(id)arg2 andFileName:(id)arg3 andPostProcessParams:(id)arg4 andProgressBlock:(CDUnknownBlockType)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;

@end

