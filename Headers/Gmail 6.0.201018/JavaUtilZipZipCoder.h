//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaNioCharsetCharset, JavaNioCharsetCharsetDecoder, JavaNioCharsetCharsetEncoder;

@interface JavaUtilZipZipCoder : NSObject
{
    JavaNioCharsetCharset *cs_;
    JavaNioCharsetCharsetDecoder *dec_;
    JavaNioCharsetCharsetEncoder *enc_;
    _Bool isUTF8_;
    JavaUtilZipZipCoder *utf8_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getWithJavaNioCharsetCharset:(id)arg1;
- (void)dealloc;
- (id)encoder;
- (id)decoder;
- (id)initPackagePrivateWithJavaNioCharsetCharset:(id)arg1;
- (_Bool)isUTF8;
- (id)toStringUTF8WithByteArray:(id)arg1 withInt:(int)arg2;
- (id)getBytesUTF8WithNSString:(id)arg1;
- (id)getBytesWithNSString:(id)arg1;
- (id)toStringWithByteArray:(id)arg1;
- (id)toStringWithByteArray:(id)arg1 withInt:(int)arg2;

@end

