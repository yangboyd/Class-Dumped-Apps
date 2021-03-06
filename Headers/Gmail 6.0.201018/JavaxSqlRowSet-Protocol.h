//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaSqlResultSet-Protocol.h"

@class IOSByteArray, JavaIoInputStream, JavaIoReader, JavaMathBigDecimal, JavaNetURL, JavaSqlDate, JavaSqlTime, JavaSqlTimestamp, JavaUtilCalendar, NSString;
@protocol JavaSqlArray, JavaSqlBlob, JavaSqlClob, JavaSqlNClob, JavaSqlRef, JavaSqlRowId, JavaSqlSQLXML, JavaUtilMap, JavaxSqlRowSetListener;

@protocol JavaxSqlRowSet <JavaSqlResultSet, JavaObject>
- (void)setURLWithInt:(int)arg1 withJavaNetURL:(JavaNetURL *)arg2;
- (void)setNClobWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setNClobWithInt:(int)arg1 withJavaSqlNClob:(id <JavaSqlNClob>)arg2;
- (void)setNClobWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setNClobWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setNClobWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setNClobWithNSString:(NSString *)arg1 withJavaSqlNClob:(id <JavaSqlNClob>)arg2;
- (void)setNCharacterStreamWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setNCharacterStreamWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setNCharacterStreamWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setNStringWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (void)setNStringWithInt:(int)arg1 withNSString:(NSString *)arg2;
- (void)setRowIdWithNSString:(NSString *)arg1 withJavaSqlRowId:(id <JavaSqlRowId>)arg2;
- (void)setRowIdWithInt:(int)arg1 withJavaSqlRowId:(id <JavaSqlRowId>)arg2;
- (void)setSQLXMLWithNSString:(NSString *)arg1 withJavaSqlSQLXML:(id <JavaSqlSQLXML>)arg2;
- (void)setSQLXMLWithInt:(int)arg1 withJavaSqlSQLXML:(id <JavaSqlSQLXML>)arg2;
- (void)removeRowSetListenerWithJavaxSqlRowSetListener:(id <JavaxSqlRowSetListener>)arg1;
- (void)addRowSetListenerWithJavaxSqlRowSetListener:(id <JavaxSqlRowSetListener>)arg1;
- (void)execute;
- (void)clearParameters;
- (void)setTimestampWithNSString:(NSString *)arg1 withJavaSqlTimestamp:(JavaSqlTimestamp *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setTimestampWithInt:(int)arg1 withJavaSqlTimestamp:(JavaSqlTimestamp *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setTimeWithNSString:(NSString *)arg1 withJavaSqlTime:(JavaSqlTime *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setTimeWithNSString:(NSString *)arg1 withJavaSqlTime:(JavaSqlTime *)arg2;
- (void)setTimeWithInt:(int)arg1 withJavaSqlTime:(JavaSqlTime *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setDateWithNSString:(NSString *)arg1 withJavaSqlDate:(JavaSqlDate *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setDateWithNSString:(NSString *)arg1 withJavaSqlDate:(JavaSqlDate *)arg2;
- (void)setDateWithInt:(int)arg1 withJavaSqlDate:(JavaSqlDate *)arg2 withJavaUtilCalendar:(JavaUtilCalendar *)arg3;
- (void)setArrayWithInt:(int)arg1 withJavaSqlArray:(id <JavaSqlArray>)arg2;
- (void)setClobWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setClobWithNSString:(NSString *)arg1 withJavaSqlClob:(id <JavaSqlClob>)arg2;
- (void)setClobWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setClobWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setClobWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2 withLong:(long long)arg3;
- (void)setClobWithInt:(int)arg1 withJavaSqlClob:(id <JavaSqlClob>)arg2;
- (void)setBlobWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setBlobWithNSString:(NSString *)arg1 withJavaSqlBlob:(id <JavaSqlBlob>)arg2;
- (void)setBlobWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withLong:(long long)arg3;
- (void)setBlobWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setBlobWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withLong:(long long)arg3;
- (void)setBlobWithInt:(int)arg1 withJavaSqlBlob:(id <JavaSqlBlob>)arg2;
- (void)setRefWithInt:(int)arg1 withJavaSqlRef:(id <JavaSqlRef>)arg2;
- (void)setObjectWithInt:(int)arg1 withId:(id)arg2;
- (void)setObjectWithNSString:(NSString *)arg1 withId:(id)arg2;
- (void)setObjectWithNSString:(NSString *)arg1 withId:(id)arg2 withInt:(int)arg3;
- (void)setObjectWithInt:(int)arg1 withId:(id)arg2 withInt:(int)arg3;
- (void)setObjectWithNSString:(NSString *)arg1 withId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)setObjectWithInt:(int)arg1 withId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)setNCharacterStreamWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setCharacterStreamWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setCharacterStreamWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2;
- (void)setBinaryStreamWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setBinaryStreamWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setAsciiStreamWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setAsciiStreamWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2;
- (void)setCharacterStreamWithNSString:(NSString *)arg1 withJavaIoReader:(JavaIoReader *)arg2 withInt:(int)arg3;
- (void)setCharacterStreamWithInt:(int)arg1 withJavaIoReader:(JavaIoReader *)arg2 withInt:(int)arg3;
- (void)setBinaryStreamWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withInt:(int)arg3;
- (void)setBinaryStreamWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withInt:(int)arg3;
- (void)setAsciiStreamWithNSString:(NSString *)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withInt:(int)arg3;
- (void)setAsciiStreamWithInt:(int)arg1 withJavaIoInputStream:(JavaIoInputStream *)arg2 withInt:(int)arg3;
- (void)setTimestampWithNSString:(NSString *)arg1 withJavaSqlTimestamp:(JavaSqlTimestamp *)arg2;
- (void)setTimestampWithInt:(int)arg1 withJavaSqlTimestamp:(JavaSqlTimestamp *)arg2;
- (void)setTimeWithInt:(int)arg1 withJavaSqlTime:(JavaSqlTime *)arg2;
- (void)setDateWithInt:(int)arg1 withJavaSqlDate:(JavaSqlDate *)arg2;
- (void)setBytesWithNSString:(NSString *)arg1 withByteArray:(IOSByteArray *)arg2;
- (void)setBytesWithInt:(int)arg1 withByteArray:(IOSByteArray *)arg2;
- (void)setStringWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (void)setStringWithInt:(int)arg1 withNSString:(NSString *)arg2;
- (void)setBigDecimalWithNSString:(NSString *)arg1 withJavaMathBigDecimal:(JavaMathBigDecimal *)arg2;
- (void)setBigDecimalWithInt:(int)arg1 withJavaMathBigDecimal:(JavaMathBigDecimal *)arg2;
- (void)setDoubleWithNSString:(NSString *)arg1 withDouble:(double)arg2;
- (void)setDoubleWithInt:(int)arg1 withDouble:(double)arg2;
- (void)setFloatWithNSString:(NSString *)arg1 withFloat:(float)arg2;
- (void)setFloatWithInt:(int)arg1 withFloat:(float)arg2;
- (void)setLongWithNSString:(NSString *)arg1 withLong:(long long)arg2;
- (void)setLongWithInt:(int)arg1 withLong:(long long)arg2;
- (void)setIntWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (void)setIntWithInt:(int)arg1 withInt:(int)arg2;
- (void)setShortWithNSString:(NSString *)arg1 withShort:(short)arg2;
- (void)setShortWithInt:(int)arg1 withShort:(short)arg2;
- (void)setByteWithNSString:(NSString *)arg1 withByte:(BOOL)arg2;
- (void)setByteWithInt:(int)arg1 withByte:(BOOL)arg2;
- (void)setBooleanWithNSString:(NSString *)arg1 withBoolean:(_Bool)arg2;
- (void)setBooleanWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (void)setNullWithNSString:(NSString *)arg1 withInt:(int)arg2 withNSString:(NSString *)arg3;
- (void)setNullWithInt:(int)arg1 withInt:(int)arg2 withNSString:(NSString *)arg3;
- (void)setNullWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (void)setNullWithInt:(int)arg1 withInt:(int)arg2;
- (void)setConcurrencyWithInt:(int)arg1;
- (void)setTypeWithInt:(int)arg1;
- (void)setQueryTimeoutWithInt:(int)arg1;
- (int)getQueryTimeout;
- (void)setEscapeProcessingWithBoolean:(_Bool)arg1;
- (_Bool)getEscapeProcessing;
- (void)setMaxRowsWithInt:(int)arg1;
- (int)getMaxRows;
- (void)setMaxFieldSizeWithInt:(int)arg1;
- (int)getMaxFieldSize;
- (void)setReadOnlyWithBoolean:(_Bool)arg1;
- (_Bool)isReadOnly;
- (void)setCommandWithNSString:(NSString *)arg1;
- (NSString *)getCommand;
- (void)setTypeMapWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (id <JavaUtilMap>)getTypeMap;
- (void)setTransactionIsolationWithInt:(int)arg1;
- (int)getTransactionIsolation;
- (void)setPasswordWithNSString:(NSString *)arg1;
- (NSString *)getPassword;
- (void)setUsernameWithNSString:(NSString *)arg1;
- (NSString *)getUsername;
- (void)setDataSourceNameWithNSString:(NSString *)arg1;
- (NSString *)getDataSourceName;
- (void)setUrlWithNSString:(NSString *)arg1;
- (NSString *)getUrl;
@end

