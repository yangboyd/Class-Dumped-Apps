//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JavaIoInputStream, JavaIoReader, NSString;

@protocol OrgW3cDomLsLSInput <JavaObject>
- (void)setCertifiedTextWithBoolean:(_Bool)arg1;
- (_Bool)getCertifiedText;
- (void)setEncodingWithNSString:(NSString *)arg1;
- (NSString *)getEncoding;
- (void)setBaseURIWithNSString:(NSString *)arg1;
- (NSString *)getBaseURI;
- (void)setPublicIdWithNSString:(NSString *)arg1;
- (NSString *)getPublicId;
- (void)setSystemIdWithNSString:(NSString *)arg1;
- (NSString *)getSystemId;
- (void)setStringDataWithNSString:(NSString *)arg1;
- (NSString *)getStringData;
- (void)setByteStreamWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (JavaIoInputStream *)getByteStream;
- (void)setCharacterStreamWithJavaIoReader:(JavaIoReader *)arg1;
- (JavaIoReader *)getCharacterStream;
@end

