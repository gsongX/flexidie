/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBValueObject.h"

//#import "NSCopying-Protocol.h"

@class FBMMessageAttachment, FBMMessageAttribution, FBMStringWithRedactedDescription, FBMThreadKey, NSArray, NSDictionary, NSString;
/*
@interface FBMMessage : FBValueObject <NSCopying>
{
    NSString *_messageId;
    NSString *_offlineThreadingId;
    FBMThreadKey *_threadKey;
    NSString *_senderId;
    FBMStringWithRedactedDescription *_text;
    NSArray *_DEPRECATED_attachments;
    NSDictionary *_DEPRECATED_shareMap;
    FBMMessageAttachment *_attachment;
    NSArray *_tags;
    NSDictionary *_logMessage;
    FBMMessageAttribution *_attribution;
    unsigned int _type;
    unsigned long long _timestamp;
    long long _actionId;
}*/
@interface FBMMessage (Messenger_35_0)
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) FBMMessageAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSDictionary *logMessage; // @synthesize logMessage=_logMessage;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) FBMMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) NSDictionary *DEPRECATED_shareMap; // @synthesize DEPRECATED_shareMap=_DEPRECATED_shareMap;
@property(readonly, copy, nonatomic) NSArray *DEPRECATED_attachments; // @synthesize DEPRECATED_attachments=_DEPRECATED_attachments;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, copy, nonatomic) FBMThreadKey *threadKey; // @synthesize threadKey=_threadKey;
@property(readonly, copy, nonatomic) NSString *offlineThreadingId; // @synthesize offlineThreadingId=_offlineThreadingId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
//- (void).cxx_destruct;
- (id)initWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 threadKey:(id)arg3 senderId:(id)arg4 text:(id)arg5 DEPRECATED_attachments:(id)arg6 DEPRECATED_shareMap:(id)arg7 attachment:(id)arg8 tags:(id)arg9 logMessage:(id)arg10 timestamp:(unsigned long long)arg11 actionId:(long long)arg12 attribution:(id)arg13 type:(unsigned int)arg14;

@end
