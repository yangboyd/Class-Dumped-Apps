//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class LolomoViewConfig, NSString;

@interface NFUILolomoEntity : COEntity
{
    NSString *_title;
    NSString *_summaryTitle;
    NSString *_detailsTitle;
    NSString *_detailsShowTitle;
    NSString *_imageTypeIdentifier;
    LolomoViewConfig *_config;
}

+ (id)falcorKeyPathMap;
@property(retain, nonatomic) LolomoViewConfig *config; // @synthesize config=_config;
@property(readonly, copy, nonatomic) NSString *imageTypeIdentifier; // @synthesize imageTypeIdentifier=_imageTypeIdentifier;
@property(readonly, copy, nonatomic) NSString *detailsShowTitle; // @synthesize detailsShowTitle=_detailsShowTitle;
@property(readonly, copy, nonatomic) NSString *detailsTitle; // @synthesize detailsTitle=_detailsTitle;
@property(readonly, copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

