﻿using Bayat.Json.Serialization;
using System;

namespace Bayat.Json.Converters
{
    public class UriConverter : JsonConverter
    {
        public override bool CanConvert(Type objectType)
        {
            return objectType == typeof(Uri);
        }

        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializerReader internalReader)
        {
            switch (reader.TokenType)
            {
                case JsonToken.String:
                    return new Uri((string)reader.Value);
                case JsonToken.Null:
                    return null;
            }

            throw new InvalidOperationException("Unhandled case for UriConverter. Check to see if this converter has been applied to the wrong serialization type.");
        }

        public override void WriteJson(JsonWriter writer, object value, JsonSerializerWriter internalWriter)
        {
            if (null == value)
            {
                writer.WriteNull();
                return;
            }

            var uri = value as Uri;
            if (uri == null)
                throw new InvalidOperationException(
                    "Unhandled case for UriConverter. Check to see if this converter has been applied to the wrong serialization type.");

            writer.WriteValue(uri.OriginalString);
            return;
        }
    }
}
