//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface RKMultiredditDescription : MTLModel <MTLJSONSerializing>
{
    NSString *_bodyHTML;
    NSString *_bodyMarkdown;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *bodyMarkdown; // @synthesize bodyMarkdown=_bodyMarkdown;
@property(readonly, copy, nonatomic) NSString *bodyHTML; // @synthesize bodyHTML=_bodyHTML;
- (void).cxx_destruct;
- (id)description;

@end

