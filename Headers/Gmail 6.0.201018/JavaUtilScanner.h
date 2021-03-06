//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoCloseable-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@class JavaIoIOException, JavaNioCharBuffer, JavaUtilLocale, JavaUtilRegexMatcher, JavaUtilRegexPattern, NSString, SunMiscLRUCache;
@protocol JavaLangReadable;

@interface JavaUtilScanner : NSObject <JavaUtilIterator, JavaIoCloseable>
{
    JavaNioCharBuffer *buf_;
    int position_;
    JavaUtilRegexMatcher *matcher_;
    JavaUtilRegexPattern *delimPattern_;
    JavaUtilRegexPattern *hasNextPattern_;
    int hasNextPosition_;
    NSString *hasNextResult_;
    id <JavaLangReadable> source_;
    _Bool sourceClosed_;
    _Bool needInput_;
    _Bool skipped_;
    int savedScannerPosition_;
    id typeCache_;
    _Bool matchValid_;
    _Bool closed_;
    int radix_;
    int defaultRadix_;
    JavaUtilLocale *locale_;
    SunMiscLRUCache *patternCache_;
    JavaIoIOException *lastException_;
    NSString *groupSeparator_;
    NSString *decimalSeparator_;
    NSString *nanString_;
    NSString *infinityString_;
    NSString *positivePrefix_;
    NSString *negativePrefix_;
    NSString *positiveSuffix_;
    NSString *negativeSuffix_;
    JavaUtilRegexPattern *integerPattern_;
    NSString *digits_;
    NSString *non0Digit_;
    int SIMPLE_GROUP_INDEX_;
    JavaUtilRegexPattern *floatPattern_;
    JavaUtilRegexPattern *decimalPattern_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)makeReadableWithJavaNioChannelsReadableByteChannel:(id)arg1;
+ (id)makeReadableWithJavaNioChannelsReadableByteChannel:(id)arg1 withJavaNioCharsetCharsetDecoder:(id)arg2;
+ (id)toDecoderWithNSString:(id)arg1;
+ (id)makeReadableWithJavaIoInputStream:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
+ (id)toCharsetWithNSString:(id)arg1;
+ (id)linePattern;
+ (id)separatorPattern;
+ (id)boolPattern;
- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)reset;
- (id)nextBigDecimal;
- (_Bool)hasNextBigDecimal;
- (id)nextBigIntegerWithInt:(int)arg1;
- (id)nextBigInteger;
- (_Bool)hasNextBigIntegerWithInt:(int)arg1;
- (_Bool)hasNextBigInteger;
- (double)nextDouble;
- (_Bool)hasNextDouble;
- (float)nextFloat;
- (_Bool)hasNextFloat;
- (id)processFloatTokenWithNSString:(id)arg1;
- (long long)nextLongWithInt:(int)arg1;
- (long long)nextLong;
- (_Bool)hasNextLongWithInt:(int)arg1;
- (_Bool)hasNextLong;
- (int)nextIntWithInt:(int)arg1;
- (int)nextInt;
- (id)processIntegerTokenWithNSString:(id)arg1;
- (_Bool)hasNextIntWithInt:(int)arg1;
- (_Bool)hasNextInt;
- (short)nextShortWithInt:(int)arg1;
- (short)nextShort;
- (_Bool)hasNextShortWithInt:(int)arg1;
- (_Bool)hasNextShort;
- (BOOL)nextByteWithInt:(int)arg1;
- (BOOL)nextByte;
- (_Bool)hasNextByteWithInt:(int)arg1;
- (_Bool)hasNextByte;
- (_Bool)nextBoolean;
- (_Bool)hasNextBoolean;
- (id)skipWithNSString:(id)arg1;
- (id)skipWithJavaUtilRegexPattern:(id)arg1;
- (id)findWithinHorizonWithJavaUtilRegexPattern:(id)arg1 withInt:(int)arg2;
- (id)findWithinHorizonWithNSString:(id)arg1 withInt:(int)arg2;
- (id)findInLineWithJavaUtilRegexPattern:(id)arg1;
- (id)findInLineWithNSString:(id)arg1;
- (id)nextLine;
- (_Bool)hasNextLine;
- (id)nextWithJavaUtilRegexPattern:(id)arg1;
- (_Bool)hasNextWithJavaUtilRegexPattern:(id)arg1;
- (id)nextWithNSString:(id)arg1;
- (_Bool)hasNextWithNSString:(id)arg1;
- (void)remove;
- (id)next;
- (_Bool)hasNext;
@property(readonly, copy) NSString *description;
- (id)match;
- (void)setRadixWithInt:(int)arg1;
- (id)useRadixWithInt:(int)arg1;
- (int)radix;
- (id)useLocaleWithJavaUtilLocale:(id)arg1;
- (id)locale;
- (id)useDelimiterWithNSString:(id)arg1;
- (id)useDelimiterWithJavaUtilRegexPattern:(id)arg1;
- (id)delimiter;
- (id)ioException;
- (void)close;
- (void)ensureOpen;
- (id)matchPatternInBufferWithJavaUtilRegexPattern:(id)arg1;
- (id)findPatternInBufferWithJavaUtilRegexPattern:(id)arg1 withInt:(int)arg2;
- (id)getCompleteTokenInBufferWithJavaUtilRegexPattern:(id)arg1;
- (_Bool)hasTokenInBuffer;
- (void)throwFor;
- (void)translateSavedIndexesWithInt:(int)arg1;
- (_Bool)makeSpace;
- (void)readInput;
- (void)useTypeCache;
- (id)getCachedResult;
- (void)clearCaches;
- (void)cacheResultWithNSString:(id)arg1;
- (void)cacheResult;
- (_Bool)revertStateWithBoolean:(_Bool)arg1;
- (void)revertState;
- (void)saveState;
- (id)initWithJavaNioChannelsReadableByteChannel:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaNioChannelsReadableByteChannel:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withJavaNioCharsetCharsetDecoder:(id)arg2;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoFile:(id)arg1;
- (id)initWithJavaIoInputStream:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithJavaLangReadable:(id)arg1;
- (id)initWithJavaLangReadable:(id)arg1 withJavaUtilRegexPattern:(id)arg2;
- (id)decimalPattern;
- (id)floatPattern;
- (void)buildFloatAndDecimalPattern;
- (id)integerPattern;
- (id)buildIntegerPatternString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

