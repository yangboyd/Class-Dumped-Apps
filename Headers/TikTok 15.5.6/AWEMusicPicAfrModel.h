//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEMusicPicAfrModel : AWEBaseApiModel
{
    NSString *_algorithm;
    double _maskArea;
    NSString *_pic;
    double _maskRatio;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double maskRatio; // @synthesize maskRatio=_maskRatio;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) double maskArea; // @synthesize maskArea=_maskArea;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
- (void).cxx_destruct;

@end

