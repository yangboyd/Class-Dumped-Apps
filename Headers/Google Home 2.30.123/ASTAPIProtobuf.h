//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface ASTAPIProtobuf : GPBMessage
{
}

+ (id)descriptor;
+ (Class)classFromFullname:(id)arg1;
- (id)ast_unpackedProto;

// Remaining properties
@property(nonatomic) _Bool hasProtobufData; // @dynamic hasProtobufData;
@property(nonatomic) _Bool hasProtobufType; // @dynamic hasProtobufType;
@property(copy, nonatomic) NSData *protobufData; // @dynamic protobufData;
@property(copy, nonatomic) NSString *protobufType; // @dynamic protobufType;

@end

