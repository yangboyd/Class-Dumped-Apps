//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWELegalEntityInfo : AWEBaseApiModel
{
    NSString *_title;
    NSString *_body;
    NSArray *_contentLinkList;
}

+ (id)contentLinkListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contentLinkList; // @synthesize contentLinkList=_contentLinkList;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

