//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DLSGenerateDeepLinkResponse : NSObject
{
    NSString *_URL;
    NSString *_webUrl;
    NSString *_deepLinkAction;
}

+ (_Bool)isShowDeepLink:(id)arg1;
@property(copy, nonatomic) NSString *deepLinkAction; // @synthesize deepLinkAction=_deepLinkAction;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithNSDictionary:(id)arg1 requestedURL:(id)arg2;
- (_Bool)shouldDeepLink;

@end

