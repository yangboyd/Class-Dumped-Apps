//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIInfoModel, AWEURLModel, NSString;

@interface AWEPOINoticeModel : AWEBaseApiModel
{
    AWEURLModel *_avatarURL;
    AWEPOIInfoModel *_poiInfo;
    NSString *_title;
    NSString *_content;
    long long _subtype;
    NSString *_schemaURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEPOIInfoModel *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) AWEURLModel *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;

@end

