//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface GRWQueryableURLSchemes : NSObject
{
    NSSet *_currentWhitelistedURLSchemes;
    NSSet *_requiredWhitelistedURLSchemes;
}

@property(copy, nonatomic) NSSet *requiredWhitelistedURLSchemes; // @synthesize requiredWhitelistedURLSchemes=_requiredWhitelistedURLSchemes;
@property(copy, nonatomic) NSSet *currentWhitelistedURLSchemes; // @synthesize currentWhitelistedURLSchemes=_currentWhitelistedURLSchemes;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)init;
- (id)initWithCurrentWhitelistedURLSchemes:(id)arg1 requiredWhitelistedURLSchemes:(id)arg2;

@end

