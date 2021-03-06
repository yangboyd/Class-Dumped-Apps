//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentFallbackHandler-Protocol.h"

@class NSDictionary, NSString;

@interface HUGSComponentFallbackHandler : NSObject <HUBComponentFallbackHandler>
{
    NSDictionary *_fallbackComponentNames;
    NSDictionary *_fallbackComponents;
}

@property(readonly, copy, nonatomic) NSDictionary *fallbackComponents; // @synthesize fallbackComponents=_fallbackComponents;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *fallbackComponentNames; // @synthesize fallbackComponentNames=_fallbackComponentNames;
- (id)fallbackComponentForCategory:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultComponentCategory;
@property(readonly, copy, nonatomic) NSString *defaultComponentName;
@property(readonly, copy, nonatomic) NSString *defaultComponentNamespace;
- (id)initWithFallbackComponents:(id)arg1;

@end

