//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, YTUploadEditInstructions;

@interface YTEditTranscodeControllerCacheKey : NSObject
{
    NSURL *_assetURL;
    YTUploadEditInstructions *_editInstructions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTUploadEditInstructions *editInstructions; // @synthesize editInstructions=_editInstructions;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (id)initWithAssetURL:(id)arg1 editInstructions:(id)arg2;

@end

