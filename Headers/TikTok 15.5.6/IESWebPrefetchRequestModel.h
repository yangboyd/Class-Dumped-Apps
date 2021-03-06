//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IESWebPrefetchRequestModel : NSObject
{
    NSString *_url;
    NSString *_method;
    NSString *_occasion;
    long long _expires;
    NSDictionary *_headers;
    NSDictionary *_params;
    NSDictionary *_data;
}

@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) long long expires; // @synthesize expires=_expires;
@property(copy, nonatomic) NSString *occasion; // @synthesize occasion=_occasion;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

