//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GIDAppSwitchScheme : NSObject
{
    _Bool _isWebBrowserScheme;
    _Bool _isWebViewScheme;
    _Bool _isSafariViewControllerScheme;
    NSString *_scheme;
    NSString *_protocolVersion;
    NSNumber *_rate;
}

@property(readonly, nonatomic) _Bool isSafariViewControllerScheme; // @synthesize isSafariViewControllerScheme=_isSafariViewControllerScheme;
@property(readonly, nonatomic) _Bool isWebViewScheme; // @synthesize isWebViewScheme=_isWebViewScheme;
@property(readonly, nonatomic) _Bool isWebBrowserScheme; // @synthesize isWebBrowserScheme=_isWebBrowserScheme;
@property(readonly, nonatomic) NSNumber *rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFirstPartyApp;
- (id)initWithDictionary:(id)arg1;

@end

