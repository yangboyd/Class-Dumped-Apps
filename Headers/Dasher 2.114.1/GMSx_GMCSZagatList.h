//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class NSString;

@interface GMSx_GMCSZagatList : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_urlString;
    NSString *_ved;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ved; // @synthesize ved=_ved;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkSentence:(id)arg1;

@end

