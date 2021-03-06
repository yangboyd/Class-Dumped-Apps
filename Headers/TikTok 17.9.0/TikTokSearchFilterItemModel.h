//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSString;

@interface TikTokSearchFilterItemModel : MTLModel <MTLJSONSerializing>
{
    NSString *_titleKey;
    NSString *_paramValue;
    NSDictionary *_logInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *logInfo; // @synthesize logInfo=_logInfo;
@property(copy, nonatomic) NSString *paramValue; // @synthesize paramValue=_paramValue;
@property(copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(readonly, copy, nonatomic) NSString *itemTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

