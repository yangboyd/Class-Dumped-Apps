//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface TikTokKidsUserPolicyLinkModel : MTLModel <MTLJSONSerializing>
{
    _Bool _dismiss;
    _Bool _approve;
    NSString *_name;
    NSString *_link;
    long long _operation;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool approve; // @synthesize approve=_approve;
@property(nonatomic) _Bool dismiss; // @synthesize dismiss=_dismiss;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

