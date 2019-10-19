//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface GSDK_GTMMIMEDocumentPart : NSObject
{
    NSDictionary *_headers;
    NSData *_headerData;
    NSData *_bodyData;
}

+ (id)partWithHeaders:(id)arg1 body:(id)arg2;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned long long length; // @dynamic length;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_bodyData;
@property(readonly, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
- (_Bool)containsBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithHeaders:(id)arg1 body:(id)arg2;

@end

