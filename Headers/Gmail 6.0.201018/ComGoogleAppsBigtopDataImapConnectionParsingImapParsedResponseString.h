//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement-Protocol.h"

@class JavaUtilDate, NSString;

@interface ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseString : NSObject <ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement>
{
    _Bool triedParsingLong_;
    _Bool isLong_;
    long long longValue_;
    _Bool triedParsingDate_;
    JavaUtilDate *dateValue_;
    NSString *string_;
}

+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (int)getSizeBytes;
- (_Bool)startsWithWithNSString:(id)arg1;
- (_Bool)isWithNSString:(id)arg1;
- (id)getAsDate;
- (_Bool)isDate;
- (id)getAsNumber;
- (_Bool)isNumber;
- (id)getAsString;
- (_Bool)isEmpty;
- (_Bool)isByteStream;
- (_Bool)isString;
- (_Bool)isList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

