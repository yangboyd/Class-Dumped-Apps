//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UtmParameters : NSObject
{
    NSString *_campaign;
    NSString *_content;
    NSString *_medium;
    NSString *_name;
    NSString *_source;
    NSString *_term;
}

@property(copy, nonatomic) NSString *term; // @synthesize term=_term;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *medium; // @synthesize medium=_medium;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *analyticsDictionary;
- (id)initWithUrl:(id)arg1;

@end

