//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ACCMVTemplateInfo : NSObject
{
    NSArray *_videoCoverURLs;
    NSArray *_photoCoverURLs;
    long long _minMaterial;
    long long _maxMaterial;
    long long _photoInputWidth;
    long long _photoInputHeight;
    NSString *_photoFillMode;
    long long _templateType;
}

+ (id)MVTemplateInfoFromEffect:(id)arg1 coverURLPrefixs:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *photoFillMode; // @synthesize photoFillMode=_photoFillMode;
@property(nonatomic) long long photoInputHeight; // @synthesize photoInputHeight=_photoInputHeight;
@property(nonatomic) long long photoInputWidth; // @synthesize photoInputWidth=_photoInputWidth;
@property(nonatomic) long long maxMaterial; // @synthesize maxMaterial=_maxMaterial;
@property(nonatomic) long long minMaterial; // @synthesize minMaterial=_minMaterial;
@property(copy, nonatomic) NSArray *photoCoverURLs; // @synthesize photoCoverURLs=_photoCoverURLs;
@property(copy, nonatomic) NSArray *videoCoverURLs; // @synthesize videoCoverURLs=_videoCoverURLs;

@end

