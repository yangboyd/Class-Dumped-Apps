//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString;

@interface GCPHTTPMultipartPart : NSObject
{
    NSString *contentId_;
    long long httpStatusCode_;
    NSDictionary *httpHeaders_;
    NSData *body_;
    NSError *error_;
    NSString *descriptionBody_;
}

+ (id)httpPartHeadersWithContentId:(id)arg1;
@property(retain, nonatomic) NSString *descriptionBody; // @synthesize descriptionBody=descriptionBody_;
@property(readonly) NSError *error; // @synthesize error=error_;
@property(readonly) NSData *body; // @synthesize body=body_;
@property(readonly) NSDictionary *httpHeaders; // @synthesize httpHeaders=httpHeaders_;
@property(readonly) long long httpStatusCode; // @synthesize httpStatusCode=httpStatusCode_;
@property(readonly) NSString *contentId; // @synthesize contentId=contentId_;
- (void).cxx_destruct;
- (void)parseData:(id)arg1;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end

