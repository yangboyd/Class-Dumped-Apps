//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSDictionary, NSString;

@interface AWEOpenPlatformInfoModel : AWEBaseApiModel
{
    NSString *_name;
    NSString *_icon;
    NSString *_link;
    NSString *_rowData;
    NSDictionary *_rowDataDict;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *rowDataDict; // @synthesize rowDataDict=_rowDataDict;
@property(copy, nonatomic) NSString *rowData; // @synthesize rowData=_rowData;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *styleID;
@property(readonly, nonatomic) NSString *shareID;
@property(readonly, nonatomic) NSString *labelIcon;
@property(readonly, nonatomic) NSString *labelName;
@property(readonly, nonatomic) NSString *anchorIcon;
@property(readonly, nonatomic) NSString *anchorName;
@property(readonly, nonatomic) NSString *anchorUrl;
@property(readonly, nonatomic) NSString *baseAppIcon;
@property(readonly, nonatomic) NSString *baseAppName;
@property(readonly, nonatomic) NSString *baseClientKey;
- (void)p_lazyLoad;

@end

