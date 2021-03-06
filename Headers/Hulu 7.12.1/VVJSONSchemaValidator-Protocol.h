//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VVJSONSchemaValidation/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet, VVJSONSchemaFactory, VVJSONSchemaValidationContext;

@protocol VVJSONSchemaValidator <NSObject>
+ (id)validatorWithDictionary:(NSDictionary *)arg1 schemaFactory:(VVJSONSchemaFactory *)arg2 error:(id *)arg3;
+ (NSSet *)assignedKeywords;
- (_Bool)validateInstance:(id)arg1 inContext:(VVJSONSchemaValidationContext *)arg2 error:(id *)arg3;
- (NSArray *)subschemas;
@end

