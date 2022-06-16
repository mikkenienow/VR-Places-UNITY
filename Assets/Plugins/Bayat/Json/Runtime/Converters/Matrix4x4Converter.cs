﻿using Bayat.Json.Linq;
using Bayat.Json.Serialization;
using System;
using UnityEngine;

namespace Bayat.Json.Converters
{
    public class Matrix4x4Converter : JsonConverter
    {
        public override void WriteJson(JsonWriter writer, object value, JsonSerializerWriter internalWriter)
        {
            if (value == null)
            {
                writer.WriteNull();
                return;
            }

            var m = (Matrix4x4)value;

            writer.WriteStartObject();

            writer.WritePropertyName("m00");
            writer.WriteValue(m.m00);

            writer.WritePropertyName("m01");
            writer.WriteValue(m.m01);

            writer.WritePropertyName("m02");
            writer.WriteValue(m.m02);

            writer.WritePropertyName("m03");
            writer.WriteValue(m.m03);

            writer.WritePropertyName("m10");
            writer.WriteValue(m.m10);

            writer.WritePropertyName("m11");
            writer.WriteValue(m.m11);

            writer.WritePropertyName("m12");
            writer.WriteValue(m.m12);

            writer.WritePropertyName("m13");
            writer.WriteValue(m.m13);

            writer.WritePropertyName("m20");
            writer.WriteValue(m.m20);

            writer.WritePropertyName("m21");
            writer.WriteValue(m.m21);

            writer.WritePropertyName("m22");
            writer.WriteValue(m.m22);

            writer.WritePropertyName("m23");
            writer.WriteValue(m.m23);

            writer.WritePropertyName("m30");
            writer.WriteValue(m.m30);

            writer.WritePropertyName("m31");
            writer.WriteValue(m.m31);

            writer.WritePropertyName("m32");
            writer.WriteValue(m.m32);

            writer.WritePropertyName("m33");
            writer.WriteValue(m.m33);

            writer.WriteEnd();
        }

        public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializerReader internalReader)
        {
            if (reader.TokenType == JsonToken.Null)
                return new Matrix4x4();

            var obj = JObject.Load(reader);
            return new Matrix4x4
            {
                m00 = (float)obj["m00"],
                m01 = (float)obj["m01"],
                m02 = (float)obj["m02"],
                m03 = (float)obj["m03"],
                m20 = (float)obj["m20"],
                m21 = (float)obj["m21"],
                m22 = (float)obj["m22"],
                m23 = (float)obj["m23"],
                m30 = (float)obj["m30"],
                m31 = (float)obj["m31"],
                m32 = (float)obj["m32"],
                m33 = (float)obj["m33"]
            };
        }

        public override bool CanRead
        {
            get { return true; }
        }

        public override bool CanConvert(Type objectType)
        {
            return objectType == typeof(Matrix4x4);
        }
    }
}
