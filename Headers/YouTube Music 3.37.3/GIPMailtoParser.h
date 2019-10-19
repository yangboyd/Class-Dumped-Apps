//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GIPMailtoParser : NSObject
{
    NSString *scheme_;
    NSString *host_;
    NSString *query_;
    NSDictionary *parameters_;
}

@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=parameters_;
@property(readonly, nonatomic) NSString *query; // @synthesize query=query_;
@property(readonly, nonatomic) NSString *host; // @synthesize host=host_;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=scheme_;
- (void).cxx_destruct;
- (id)parseQueryString:(id)arg1;
- (id)initWithMailtoURL:(id)arg1;

@end

