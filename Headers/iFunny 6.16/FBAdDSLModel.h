//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface FBAdDSLModel : NSObject
{
    NSMutableDictionary *_adData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableDictionary *adData; // @synthesize adData=_adData;
- (id)imageAssetsInMetadata;
- (id)videoAssetsInMetadata;
- (id)htmlAssetsInMetadata;
@property(readonly, copy, nonatomic) NSString *mainHTMLAssetInMetadata;
@property(readonly, copy, nonatomic) NSArray *assets;
- (id)initWithAdData:(id)arg1;

@end

