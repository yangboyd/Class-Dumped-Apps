//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NFDRenderContext, NSArray;

@interface CHMRegistrationContext : NSObject <NSSecureCoding>
{
    NFDRenderContext *_renderContext;
    NSArray *_selectionTokens;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithRenderContext:(id)arg1 selectionTokens:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *selectionTokens; // @synthesize selectionTokens=_selectionTokens;
@property(readonly, nonatomic) NFDRenderContext *renderContext; // @synthesize renderContext=_renderContext;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRenderContext:(id)arg1 selectionTokens:(id)arg2;

@end

