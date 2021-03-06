//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEStarLinkModel : MTLModel <MTLJSONSerializing>
{
    AWEURLModel *_iconURLModel;
    NSString *_title;
    NSString *_webURL;
    NSString *_openURL;
    unsigned long long _type;
}

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEURLModel *iconURLModel; // @synthesize iconURLModel=_iconURLModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

